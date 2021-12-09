import java.util.Iterator;

public interface LinkedList<T> extends Iterator<T> {

  void size();

  boolean isEmpty();

  T peekFirst();

  T peekLast();

  int indexOf(T data);

  boolean contains(T data);

  void insertFront();

  void insertBack();

  void insertAtIndex(T data);

  void removeFront();

  void removeBack();

  void removeAtIndex(T data);

}
