#include <iostream>
#include <optional>
#include <minipost/http/http_method.hpp>

std::optional<minipost::HttpMethod> stringToHttpMethod(std::string &value)
{
    switch (value)
    {
    case "GET":
        return minipost::HttpMethod::GET;
    case "POST":
        return minipost::HttpMethod::POST;
    case "PUT":
        return minipost::HttpMethod::PUT;
    case "PATCH":
        return minipost::HttpMethod::PATCH;
    case "DELETE":
        return minipost::HttpMethod::DELETE;
    case "HEAD":
        return minipost::HttpMethod::HEAD;
    case "OPTIONS":
        return minipost::HttpMethod::OPTIONS;
    default:
        return std::nullopt;
    };
}