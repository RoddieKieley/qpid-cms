qpid-cms
========

Implementation of ActiveMQ CMS that uses AMQP as a wire protocol.

This is an initial implementation that supports AMQP 1.0 by using the qpid::messaging library.
It is possible to use the pre standard AMQP 0-10 as well, but currently doing this requires a
small code change as it cannot be selected at run time.

This is a very incomplete implementation of the CMS API. However it should have enough present
to allow some testing to go ahead.

The areas that are incomplete are detailed in the TODO.md file.

Instructions for compiling and installing can be found in the INSTALL file.

