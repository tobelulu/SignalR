#pragma once
#include "httpbasedtransport.h"
class LongPollingTransport :
    public HttpBasedTransport
{
public:
    LongPollingTransport(http_client* httpClient);
    ~LongPollingTransport(void);

    //pplx::task<void> Start(Connection* connection, utility::string_t data, void* state = NULL);

protected:
    void OnStart(Connection* connection, utility::string_t data);
};
