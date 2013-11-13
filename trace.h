int trace = 0;
#define trace_log(str) \
    if (trace) { \
        if (str) \
            printf("[MYLOG] func=%s line=%d str=%s\n", __func__, __LINE__, str); \
        else \
            printf("[MYLOG] func=%s line=%d\n", __func__, __LINE__); \
    }
