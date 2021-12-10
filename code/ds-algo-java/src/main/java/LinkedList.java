import java.util.Iterator;

public interface LinkedList<T> extends Iterable<T> {

  int size();

  boolean isEmpty();

  T peekFirst();

  T peekLast();

  int indexOf(T data);

  boolean contains(T data);

  void insertFront(T data);

  void insertBack(T data);

  void insertAtIndex(T data, int index);

  T removeFront();

  T removeBack();

  T removeAtIndex(int index);

  @Override
  Iterator<T> iterator();
}
