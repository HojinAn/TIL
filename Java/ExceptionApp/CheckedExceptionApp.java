import java.io.FileWriter;
import java.io.IOException;

public class CheckedExceptionApp {
	public static void main(String[] args) {
		try {
			FileWriter f = new FileWriter("data.txt");
			f.write("Creating txt file");
			f.close();//�츮�� �����ϴ� ���� �� txt ������ ��� �ִ� �� ���ִ� �۾�
			//checkedException�� ���� ���� ���α׷��� �˾Ƽ� exception �߻��� �˷��ش�. �׷��� try catch�� ó�����ֱ�
		}catch(IOException e) {
			e.printStackTrace();
		}

	}

}
