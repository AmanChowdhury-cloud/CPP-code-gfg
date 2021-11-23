
Node* curr = head;
        Node* temp;
        while(curr)
        {
            temp = curr->next;
            Node* new_node = new Node(curr->data);
            curr->next = new_node;
            new_node->next = temp;
            curr = temp;

        }
        curr = head; //reasigning current back to head

        //assigng the random pointers
        while(curr)
        {
            if(curr->next)
            {
        curr->next->arb = curr->arb ? curr->arb->next : NULL;
            }
            curr =  curr->next->next;
        }

        // sepearating the original and cloned linkedlists
        Node* org = head,*copy = head->next;
        Node* temp1 = copy; //for returning the head of the cloned linkedlist
        while(org)
        {
            org->next = org->next->next;
            copy->next = copy->next ? copy->next->next : NULL;
            org = org->next;
            copy = copy->next;
        }
       return temp1;
