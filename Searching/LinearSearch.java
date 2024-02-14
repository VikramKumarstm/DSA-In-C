public class LinearSearch {
    public static void main(String[] args) {

        int arr[] = {8, 16, 32, 39, 48, 51, 57, 59};
        int target =8;

        int idx = -1;
        for(int i=0; i<arr.length; i++) {
            if(arr[i] == target) {
                idx = i;
                break;
            }
        }

        if(idx == -1) {
            System.out.println("target element not found");
        }
        else {
            System.out.println("target element is "+idx+" index.");
        }
    }
}