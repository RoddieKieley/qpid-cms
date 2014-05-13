This List was initially copied from NOTES:

Missing features
- Can't select AMQP 0-10 or 1.0 at the Connection level
  - Would need to do this in the connection URL.
- Finish Session factories
  - Browser
  - DurableConsumer
  - Consumer factory with selector
- No durable consumer support
- No session recovery support
- No sending messages with different destination than the MessageProducer
  - This is not directly supported by qpid::messaging so needs a
    protocol specific hack to make work or
  - Could add a setDestination() to qpid::messaging::Message API.
- No message sending with asynchronous completion callback
  - This is gap in the qpid::messaging capabilities so will be very hard
    to add without adding this to the underlying qpid capabilities.

    The Most consonant way to add it to the API would be to add an extension
    to Session::nextReceiver() which also gave back senders with waiting
    acknowledges, and then an API to get next ack for a sender.
- No selectors
- Message destination not handled
  - Cannot extract destination from a received message.
- BytesMessage bare bones implemented needs full set of writeXxxx()/readXxxx() functions
- StreamMessage unimplemented
  - not clear how this maps to AMQP Messages (content type, etc.)
- MapMessage unimplemented
  - not clear how this maps to AMQP Messages (content type, etc.)

Bigger features missing:
* Unit tests or much example code
  - There is the beginnings of  unit tests
  - There is a simple producer and consumer example copied and modified
    from the ActiveMQ-CMS tree.
* MessageTransformer callouts.
  - The APIs to set the transformers are there. But no transformers are ever run.
* XA Transactions (whole other connection factory).
* Temporary queues/topics. Factories in session will try to create them but
  they currently just throw.
* Enhanced Connection
- This is used to get an interface to query destinations and to receive callbacks
  on destination events (creation/deletion)
* Selectors
-- Do we need to translate from JMS syntax to the qpid supported syntax?
   (Simple text to text mapping of some variable names)
   If necessary should do this actually in qpid code.
