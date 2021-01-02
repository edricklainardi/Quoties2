#include <jni.h>
#include <stdlib.h>
#include <time.h>

jint Jniint() {
    srand((unsigned int) time(0));
    int intrandom = (rand() % (990 - 101)) + 101;
    return intrandom;
}

extern "C" JNIEXPORT jint JNICALL
Java_id_ac_ui_cs_mobileprogramming_edricklainardi_quoties_MainActivity_Jniint(JNIEnv *env, jobject)
{
    return (jint) Jniint();
}