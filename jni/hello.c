#include <jni.h>

/*
 * �������ƹ涨 : Java_������������_������()
 * JNIEnv ָ��
 *
 * �������� :
 * env : ����Java����, ͨ������������Ե���Java�еķ���
 * thiz : �������JNI�����Ķ���, ��MainActivity����
 */
jstring Java_shuliang_han_ndkhelloworld_MainActivity_helloFromJNI(JNIEnv *env, jobject thiz)
{
	/*
	 * ���� android-ndk-r9c\platforms\android-8\arch-arm\usr\include ��jni.h�еķ���
	 * jni.h �ж���ķ���  jstring (*NewStringUTF)(JNIEnv*, const char*);
	 */
	return (*env)->NewStringUTF(env, "hello world jni");
}
