#include "json_msg_handler.h"
#include "vim9_nox11_env.h"
#include <gtest/gtest.h>

TEST(handle_msg, handle_msg_1) {
    handle_msg("test");
}
