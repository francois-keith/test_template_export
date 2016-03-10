// Classical import export api for windows

#if defined(WIN32)
  #if defined(base_EXPORTS)
    #define base_DLL_EXPORTS __declspec(dllexport)
  #else
    #define base_DLL_EXPORTS __declspec(dllimport)
  #endif
#else
  #define base_DLL_EXPORTS
#endif


