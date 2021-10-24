import java.io.FileWriter;
import java.io.IOException;

public class CheckedExceptionApp {
	public static void main(String[] args) {
		FileWriter f=null;
		try {
			f = new FileWriter("data.txt");
			f.write("Creating txt file");
			//close �߻� ���� Exception�� �߻��Ѵٸ� close�� ������� �ʾ� ������ ���� ���� �� �ִ�.
			//f.close();
		}catch(IOException e) {//���� �̷��� Exception�� �߻��ص�
			e.printStackTrace();
		} finally {//�� finally�� �������༭ �������� �Ѵ�.
			if (f != null) {
				try {
					f.close();//IOException�� ������ ������ �߻��� �� �����ϱ� �굵 ����ó�� ����� �Ѵ�.
				} catch (IOException e) {
					e.printStackTrace();//��� �̷��� ������� �����ϴ�..
				}
			}			
		}

	}

}
