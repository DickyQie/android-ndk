#include <jni.h>

/*
 * �������ƹ涨 : Java_������������_������()
 * JNIEnv ָ��
 *
 * �������� :
 * env : ����Java����, ͨ������������Ե���Java�еķ���
 * thiz : �������JNI�����Ķ���, ��MainActivity����
 */
jstring Java_com_zhangqie_ndkhelloworld_MainActivity_helloFromJNI(JNIEnv *env, jobject thiz)
{
	/*
	 * ���� android-ndk-r12b\platforms\android-9\arch-arm\usr\include ��jni.h�еķ���
	 * jni.h �ж���ķ���  jstring (*NewStringUTF)(JNIEnv*, const char*);
	 *
	 * ���Ը���·���ҵ��÷���
	 *
	 */
	return (*env)->NewStringUTF(env, "hello world zhangqie");
}
