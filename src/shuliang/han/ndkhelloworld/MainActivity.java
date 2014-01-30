package shuliang.han.ndkhelloworld;

import android.app.Activity;
import android.os.Bundle;
import android.view.View;
import android.widget.Toast;

public class MainActivity extends Activity {

	//��̬��������C���Կ��ļ�
	static{
		System.loadLibrary("hello");
	}
	
	/*
	 * ����һ��native����
	 * ���������Java����û��ʵ�ֵ�, û�з�����
	 * �÷�����Ҫʹ��C���Ա�д
	 */
	public native String helloFromJNI();
	
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        System.out.println(helloFromJNI());
    }

    public void onClick(View view) {
    	//�����ť��ʾ��jni���õõ����ַ�����Ϣ
    	Toast.makeText(getApplicationContext(), helloFromJNI(), 1).show();
	}
    
}
