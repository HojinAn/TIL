
public class LinkedList <E> {
	//노드 정의
	class Node<E>{
		E data;
		Node<E> next;
		public Node(E obj){
			data=obj;
			next=null;
		}
	}
	private Node<E> head;
	// 노드 개수를 세는 변수
	private int currentSize;
	// 기본 연결 리스트
	public LinkedList(){
		head=null;
		currentsize=null;
	}
}
