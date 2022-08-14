import java.util.* ;
import java.io.*; 
/************************************************************

    Following is the linked list node structure:
    
    class LinkedListNode<T> {
        T data;
        LinkedListNode<T> next;

        public LinkedListNode(T data) {
            this.data = data;
        }
    }

************************************************************/

public class Solution {
	public static LinkedListNode<Integer> sortTwoLists(LinkedListNode<Integer> first, LinkedListNode<Integer> second) {
        LinkedListNode result = null;
		// Write your code here.
        if(first==null) {
            return second;
        }
        if(second==null) {
            return first;
        }
        
        if(first.data < second.data) {
            result = first;
            result.next = sortTwoLists(first.next,second);
        }
        else {
            result = second;
            result.next = sortTwoLists(first,second.next);
        }
        
        return result;
	}
}
