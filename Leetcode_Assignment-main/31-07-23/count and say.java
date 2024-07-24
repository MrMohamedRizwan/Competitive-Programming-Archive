class Solution {
    public String call(int n) {
        if (n == 1)
            return "1";
        else {
            String k = call(n - 1);
            char c = k.charAt(0);
            int cn = 1;
            String s = "";
            for (int i = 1; i < k.length(); i++) {
                if (c == k.charAt(i)) {
                    cn++;
                } else {
                    s = s + String.valueOf(cn) + c;
                    c = k.charAt(i);
                    cn = 1;
                }
            }
            System.out.println("befor " + s);
            s = s + String.valueOf(cn) + c;
            System.out.println("after " + s);

            return s;
        }
    }

    public String countAndSay(int n) {
        Solution o = new Solution();
        String z = o.call(n);
        return z;
    }
}