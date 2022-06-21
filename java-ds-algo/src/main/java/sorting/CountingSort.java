package sorting;

import java.util.Arrays;

public class CountingSort implements Sorter {

    @Override
    public int[] sort(int[] arr) {
        if (arr == null || arr.length == 0) {
            return arr;
        }
        return countingSort(arr);
    }

    private int[] countingSort(int[] arr) {
        int minVal = arr[0];
        int maxVal = arr[0];
        for (int num: arr) {
            minVal = Math.min(minVal, num);
            maxVal = Math.max(maxVal, num);
        }

        int size = maxVal - minVal + 1;
        int[] counts = new int[size];

        for (int num : arr) {
            counts[num - minVal]++;
        }

        for (int i = 0, k = 0; i < size; ++i) {
            while (counts[i]-- > 0) {
                arr[k++] = i + minVal;
            }
        }

        return arr;
    }

}
