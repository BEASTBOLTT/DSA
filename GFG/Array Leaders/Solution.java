class Solution {
    static ArrayList<Integer> leaders(int arr[]) {
        ArrayList<Integer> ans = new ArrayList<>();
        int n = arr.length;
        int le = arr[n-1];
        ans.add(le);
        for (int i = n-2; i>=0; i--){
            if (arr[i]>=le){
                le = arr[i];
                ans.add(le);
            }
        }
        Collections.reverse(ans);
        return ans;
    }
}
