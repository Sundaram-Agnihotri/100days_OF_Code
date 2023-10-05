    {
        // add your code here
          if (odd == null || odd.next == null || odd.next.next == null)
            return;
        
        Node even = odd.next;
        odd.next = odd.next.next;
        odd = odd.next;
        even.next = null;
        
        while (odd != null && odd.next != null) {
            Node temp = odd.next.next;
            odd.next.next = even;
            even = odd.next;
            odd.next = temp;
            if (temp != null)
                odd = temp;
        }
        odd.next = even;
    }
}
