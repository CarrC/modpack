#include "stop.hpp"
#include <Poco/StreamCopier.h>
#include <Poco/Net/HTTPServerResponse.h>
#include <Poco/Net/HTTPServerRequest.h>
#include "../../../modules/common_component.hpp"

namespace resources {
    stop::stop() = default;
    stop::~stop() = default;

    void stop::handle_get(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response) {
        try {
            handleHttpStatusCode(200, response);
            std::ostream& outputStream = response.send();
            outputStream << "ok";
            outputStream.flush();
            sqf::diag_log("entering lock");
            //{
                //LOCK;
                if (sqf::is_dedicated()) {
                    sqf::diag_log("dedi");
                    //sqf::call(sqf::get_variable(sqf::ui_namespace(), "uksf_persistence_fnc_shutdown"));
                } else {
                    sqf::diag_log("hc");
                    //std::exit(0);
                }
            //}
            sqf::diag_log("exiting lock");
        } catch (exception& exception) {
            handleHttpStatusCode(exception.code(), response);
            std::ostream& outputStream = response.send();
            outputStream << toJson(exception);
            outputStream.flush();
        }
    }

    void stop::handle_options(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response) {
        response.set("Allow", "GET, OPTIONS");
        response.setContentType("text/plain; charset=utf-8");

        handleHttpStatusCode(200, response);
        std::ostream& outputStream = response.send();
        outputStream.flush();
    }
}
