
public class LinkedList <E> {
	//��� ����
	class Node<E>{
		E data;
		Node<E> next;
		public Node(E obj){
			data=obj;
			next=null;
		}
	}
	private Node<E> head;
	// ��� ������ ���� ����
	private int currentSize;
	// �⺻ ���� ����Ʈ
	public LinkedList(){
		head=null;
		currentsize=null;
	}
}