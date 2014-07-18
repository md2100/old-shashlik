#define LOG_TAG "appproc"

//#include <stdlib.h>
//#include <stdio.h>
//#include <unistd.h>

//#include <cutils/properties.h>
//#include <binder/IPCThreadState.h>
//#include <binder/ProcessState.h>
//#include <utils/Log.h>
//#include <cutils/process_name.h>
//#include <cutils/memory.h>
//#include <cutils/trace.h>
//#include <android_runtime/AndroidRuntime.h>
//#include <sys/personality.h>


namespace shashlik {

class JNIEnv;


class AppRuntime // : public AndroidRuntime
{
public:
    AppRuntime();
    ~AppRuntime();

#if 0
    // this appears to be unused
    const char* getParentDir() const;
#endif

    const char* getClassName() const;

    // Reimplemented virtual functions
    virtual void onVmCreated(JNIEnv* env);
    virtual void onStarted();
    virtual void onZygoteInit();
    virtual void onExit(int code);

private:

    const char*        m_parentDir;
    const char*        m_className;
    //jclass             m_class;
    int                m_argC;
    const char* const* m_argV;
};


} // namespace shashlik

