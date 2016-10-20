#ifndef wrapper_h
#define wrapper_h

#ifdef __cplusplus
extern "C" {
#endif

enum {
    WRAPPER_DOCUMENTS,
    WRAPPER_LIBRARY_SUPPORT,
    WRAPPER_LIBRARY_CACHE,
};

void wrapper_NSLog(const char *message);
void wrapper_paths(int type, char *dest, size_t destlen);
void wrapper_assets(void); // extracts to WRAPPER_LIBRARY_SUPPORT
float wrapper_scale(void);
void wrapper_size(unsigned int *dest);

#ifdef __cplusplus
}
#endif

#endif /* wrapper_h */
