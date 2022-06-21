package sorting;

import java.util.Arrays;

public class RadixSort implements Sorter {

    @Override
    public int[] sort(int[] arr) {
        if (arr == null || arr.length == 0) {
            return arr;
        }
        return radixSort(arr);
    }

    private int[] radixSort(int[] arr) {
        int maxVal = max(arr);
        int digits = digitsCount(maxVal);

        int pos = 1;
        while (digits-- > 0) {
            arr = countingSort(arr, pos);
            pos *= 10;
        }

        return arr;
    }

    private int max(int[] arr) {
        int maxVal = arr[0];
        for (int num : arr) {
            if (num > maxVal) {
                maxVal = num;
            }
        }
        return maxVal;
    }

    private int digitsCount(int num) {
        return (int) Math.log10(num) + 1;
    }

    private int[] countingSort(int[] arr, int pos) {
        int size = 10;
        int[] counts = new int[size];
        int[] outArr = new int[arr.length];

        for (int num : arr) {
            int idx = (num / pos) % size;
            counts[idx]++;
        }

        counts[0]--;

        for (int i = 1; i < size; ++i) {
            counts[i] += counts[i - 1];
        }

        for (int i = arr.length - 1; i >= 0; i--) {
            int idx = (arr[i] / pos) % size;
            outArr[counts[idx]--] = arr[i];
        }

        return outArr;
    }

}
