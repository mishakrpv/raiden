#ifndef _PXS_HTTP_H_INCLUDED_
#define _PXS_HTTP_H_INCLUDED_

typedef struct
{
    char *key;
    char *value;
} http_header;

typedef struct
{
    http_header **headers;
    char *method;
    char *url;
    float protocol_version;
    char *body;
} http_request;

typedef struct
{
    http_header **headers;
    float protocol_version;
    int status_code;
    char *status_text;
    char *body;
} http_response;

#endif /* _PXS_HTTP_H_INCLUDED_ */