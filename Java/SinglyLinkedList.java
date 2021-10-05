// singly linked list

import java.util.Scanner;
class Node{
    int roll_no;
    Node next;
}
class SinglyLinkedList {
    Node start;
    SinglyLinkedList(){
        start = null;
    }
    void addNode(){
        System.out.println("Enter your Roll_no.");
        Scanner sc = new Scanner(System.in);
        int r = sc.nextInt();

        Node newnode = new Node();
        newnode.roll_no = r;
        newnode.next = null;

        if(start == null){
            start = newnode;
        }
        else{
            Node current = start;
            while(current.next!=null){
                current = current.next;
            }
            current.next = newnode;
        }
        System.out.println("Data inserted...");
    }
    void deleteNode(){
        if(start == null){
            System.out.println("List Empty");
        }
        else{
            System.out.println("deleted : "+start.roll_no);
            start = start.next;
        }
    }
    void deleteNodelast(){
        if(start == null){
            System.out.println("List Empty");
        }
        else{
            Node p = start;
            Node current=start;
            while(current.next!=null){
                p=current;
                current=current.next;
            }
            System.out.println("deleted:"+ current.roll_no);
            p.next=null;
        }
    }
    void traverseNode(){
        if(start==null){
            System.out.println("List Empty");
        }
        else{
            Node current;
            for(current = start; current!=null; current=current.next){
                System.out.print(" "+current.roll_no);
            }
        }
    }
    void searchNode(){
        if(start == null){
            System.out.println("List Empty");
        }
        else{
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter searching element");
            int sea = sc.nextInt();

            int count = 0;
            Node current;
            for(current = start; current !=null; current = current.next ){
                if(current.roll_no == sea){
                    count++;
                    break;
                }
            }
            if(count>0){
                System.out.println("Data found...");
            }
            else{
                System.out.println("data not found");
            }
        }
    }
    public static void main(String args[]){
        SinglyLinkedList obj = new SinglyLinkedList();
        while(true){
            System.out.println();
            System.out.println("Press 1 for insert");
            System.out.println("Press 2 for delete");
            System.out.println("Press 3 for traverse");
            System.out.println("Press 4 for serach");
            System.out.println("Press 5 for deletelast");
            System.out.println("Press 6 for Exit");
            System.out.println("Enter your choice");
            Scanner sc = new Scanner(System.in);
            int ch = sc.nextInt();
            switch(ch){
                case 1:
                    obj.addNode();
                    break;
                case 2:
                    obj.deleteNode();
                    break;
                case 3:
                    obj.traverseNode();
                    break;
                case 4:
                    obj.searchNode();
                    break;
                case 5:
                    obj.deleteNodelast();
                    break;
                case 6:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Wrong choice");
            }
        }
    }
}
