import java.util.Arrays;

public class HomeWork {
    public static void bubbleSort(int[] array) {
        for (int i = 0; i < array.length-1; i++) {
            boolean flag = true;
            for (int j = 0; j < array.length-1-i; j++) {
                if(array[j] > array[j+1]) {
                    int tmp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = tmp;
                    flag = false;
                }
            }
            if(flag) {
                break;
            }
        }
    }
    public static void main1(String[] args) {
        int[] array = {3,7,6,8,1,2};
        bubbleSort(array);
        System.out.println(Arrays.toString(array));
    }
    public static boolean isUp(int[] array) {
        for (int i = 0; i < array.length-1 ; i++) {
            if(array[i] > array[i+1]) {
                return false;
            }
        }
        return true;
    }
    public static void main2(String[] args) {
        int[] array = {1,2,3,10,5,6};
        System.out.println(isUp(array));
    }
    public static int binarySearch(int[] array,int key) {
        int left = 0;
        int right = array.length-1;
        while(left <= right) {
            count++;
            int mid = (left+right)>>>1;
            if(array[mid] > key) {
                right = mid - 1;
            } else if(array[mid] < key){
                left = mid + 1;
            } else {
                return mid;
            }
        }
        return -1;
    }
    public static void main3(String[] args) {
        int[] array = {1,2,3,4,5,6};
        System.out.println(binarySearch(array, 7));
    }
    public static int[] copyOf(int[] array) {
        int [] copy = new int[array.length];
        for (int i = 0; i < array.length; i++) {
            copy[i] = array[i];
        }
        return copy;
    }
    public static void main4(String[] args) {
        int[] array = {1,2,3,4,5,6};
        int[] copy = copyOf(array);
        System.out.println(Arrays.toString(copy));
    }
    public static String toString(int[] array) {
        String ret = "[";
        for (int i = 0; i < array.length ; i++) {
            ret+= array[i];
            if(i < array.length-1) {
                ret+= ", ";
            }
        }
        ret+= "]";
        return ret;
    }
    public static void main5(String[] args) {
        int[] array = {1,2,3,4,5,6};
        System.out.println(toString(array));
    }
    public static void main6(String[] args) {
        int[] array = {1,2,3,4,5,6};
        /*int[] ret = Arrays.copyOf(array,array.length);
        System.out.println(Arrays.toString(ret));
        int[] copy = Arrays.copyOfRange(array,0,3);
        System.out.println(Arrays.toString(copy));
        */
        int[] ret = array.clone();
        System.out.println(Arrays.toString(ret));
        int[] copy = new int[array.length];
        System.arraycopy(array,0,copy,0,array.length);
        System.out.println(Arrays.toString(copy));
    }
    public static int count = 0;
    public static int find(int[] array,int key) {
        for (int i = 0; i < array.length; i++) {
           count++;
            if(array[i] == key) {
                return i;
            }
        }
        return -1;
    }
    public static void main7(String[] args) {
        int[] array = new int[10000];
        for (int i = 0; i < array.length; i++) {
            array[i] = i;
        }
        //binarySearch(array,9999);
        find(array,9999);
        System.out.println(count);
        int[] arr = {1,2,3,4,5,6};
        System.out.println(Arrays.binarySearch(arr, 3));
        System.out.println(Arrays.binarySearch(arr, 0, 3, 4));
    }

    public static void main8(String[] args) {
        int [] arr = new int[10];
        Arrays.fill(arr,8);
        System.out.println(Arrays.toString(arr));
        int [] arr1 = Arrays.copyOf(arr,arr.length);
        System.out.println(Arrays.equals(arr, arr1));
    }
    public static void swap(int[] array) {
        int left = 0;
        int right = array.length - 1;
        while (left < right) {
            while (left < right && array[left] % 2 == 0) {
                left++;
            }
            while(left < right && array[right] %2 != 0) {
                right--;
            }
            if(left < right) {
                int tmp = array[left];
                array[left] = array[right];
                array[right] = tmp;
            }
        }
    }
    public static void main9(String[] args) {
        int[] array = {1,2,3,4,5,6,7,8,9,10};
        swap(array);
        System.out.println(Arrays.toString(array));
    }
    public static void reverse(int[] array) {
        int left = 0;
        int right = array.length-1;
        while(left < right) {
            int tmp = array[left];
            array[left] = array[right];
            array[right] = tmp;
            left++;
            right--;
        }
    }
    public static void main(String[] args) {
        int[] array = {1,2,3,4,5,6,7,8,9,10};
        reverse(array);
        System.out.println(Arrays.toString(array));
    }
}
