public class BinarySearch {

    public static int binarySearch(int arr[], int target) {
        int low=0 , high = arr.length-1;

        while(low <= high) {
            int mid = low+(high-low)/2;
            if(arr[mid] == target) {
                return mid;
            }
            else if(arr[mid] < target) {
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        int arr[] = {10, 12, 45, 48, 56, 68, 98, 104};
        int target = 10;
         
        int result = binarySearch(arr, target);
         
        if(result == -1) {
            System.out.println("element is not found in an array");
        }
        else{
            System.out.println("Element found at "+result+" index");
        }
    }
}
