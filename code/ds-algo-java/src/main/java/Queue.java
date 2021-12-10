import java.util.Iterator;

public interface Queue<T> extends Iterable<T> {

  int size();

  boolean isEmpty();

  T peekFront();

  T peekBack();

  void pushFront(T data);

  void pushBack(T data);

  T popFront();

  T popBack();

  @Override
  Iterator<T> iterator();
}
