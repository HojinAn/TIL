package boj.recursion;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class BOJ1991 {
	static StringBuilder ans = new StringBuilder();

	static class Node {
		char data;
		Node left, right;

		Node(char data) {
			this.data = data;
		}
	}

	static class Tree {
		public Node root;

		public void addNode(char data, char left, char right) {
			if (root == null) root = new Node(data);
			addNode(root, data, left, right);
		}

		public void addNode(Node node, char data, char left, char right) {
			if (node == null) {
				return;
			} else if (node.data == data) {
				if (left != '.') node.left = new Node(left);
				if (right != '.') node.right = new Node(right);
			} else {
				addNode(node.left, data, left, right);
				addNode(node.right, data, left, right);
			}
		}

		public void preorder(Node node) {
			if (node != null) {
				ans.append(node.data);
				preorder(node.left);
				preorder(node.right);
			}
		}

		public void inorder(Node node) {
			if (node != null) {
				inorder(node.left);
				ans.append(node.data);
				inorder(node.right);
			}
		}

		public void postorder(Node node) {
			if (node != null) {
				postorder(node.left);
				postorder(node.right);
				ans.append(node.data);
			}
		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(in.readLine());

		Tree tree = new Tree();
		char[] temp;
		for (int i = 0; i < n; i++) {
			temp = in.readLine().replaceAll(" ", "").toCharArray();
			tree.addNode(temp[0], temp[1], temp[2]);
		}
		in.close();

		tree.preorder(tree.root);
		ans.append("\n");
		tree.inorder(tree.root);
		ans.append("\n");
		tree.postorder(tree.root);
		System.out.println(ans);
	}
}
