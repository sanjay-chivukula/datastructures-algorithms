import java.util.Iterator;

public interface Stack<T> extends Iterable<T> {

  int size();

  boolean isEmpty();

  T peek();

  void push(T data);

  T pop();

  @Override
  Iterator<T> iterator();
}
