#ifndef JSON_MSG_HANDLER_H
#define JSON_MSG_HANDLER_H

#include <uv.h>

#define MAX_VIM_INPUT 65536
#define MAX_REAL_RESPONSE_SIZE (PATH_MAX * 2)

void handle_msg(uv_loop_t *loop, const char *msg_str);

#endif /* JSON_MSG_HANDLER_H */
