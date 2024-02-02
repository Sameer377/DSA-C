public class ll{



    public static void main(String[] args) {
        Node node = new Node(1,null);
        Node node1 = new Node(1,node);

        System.out.println(node1.next.data);

    }

    public static class Node{
        public int data;
        public Node next=null;
        public Node() {
        }
        public Node(int data, ll.Node next) {
            this.data = data;
            this.next = next;
        }
        
    }
}