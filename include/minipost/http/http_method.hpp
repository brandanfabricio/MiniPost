#pragma once
#include <optional>
namespace minipost
{
    enum class HttpMethod
    {
        GET,
        POST,
        PUT,
        PATCH,
        DELETE,
        HEAD,
        OPTIONS
    };

    std::optional<HttpMethod> stringToHttpMethod(std::string &value);
}