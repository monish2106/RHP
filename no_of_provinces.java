class Solution {
    private int find(int ldr[],int node){
        if(ldr[node]!=node){
            ldr[node]=find(ldr,ldr[node]);
        }
        return ldr[node];
    }
    private void join(int ldr[],int lt,int rt){
        ldr[find(ldr,rt)]=find(ldr,lt);
    }
    public int findCircleNum(int[][] g) {
        int N=g.length;
        int ldr[]=new int[N+1];
        for(int c=1;c<=N;c++) ldr[c]=c;
        for(int city=0;city<N;city++){
            for(int oc=0;oc<N;oc++){
                    if(city==oc) continue;
                    if(g[city][oc]==1){
                        join(ldr,city+1,oc+1);
                    }
                }
            }
            Set<Integer> st=new HashSet<>();                                    
            for(int c=1;c<=N;c++){
                st.add(find(ldr,c));
            }
            return st.size();
    }
    
}
