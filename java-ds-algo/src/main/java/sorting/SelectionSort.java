package sorting;

import java.util.Arrays;

public class SelectionSort implements Sorter{
    @Override
    public int[] sort(int[] arr) {
        return selectionSort(arr);
    }

    private int[] selectionSort(int[] arr) {
        for (int i = 0; i < arr.length; ++i) {
            for (int j = i; j < arr.length; ++j) {
                if (arr[j] < arr[i]) {
                    int min = arr[j];
                    arr[j] = arr[i];
                    arr[i] = min;
                }
            }
        }
        return arr;
    }
}
