class Node{
    int val, minval;
}


class MinStack {
    Stack<Node> st;
    public MinStack() { st = new Stack<>();
    }

    public void push(int value) {
       Node n=new Node();
       int mini=value;
       n.val=value;
       if(!st.isEmpty()){
        mini=Math.min(mini,st.peek().minval);
       }
       n.minval =mini;
       st.push(n);
    }

    public void pop() {
        st.pop();
    }

    public int top() {
        return st.peek().val;
    }

    public int getMin() {
        return st.peek().minval;
    }
}

