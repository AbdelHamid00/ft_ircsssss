Internet is ruled by solid standards protocols that allow connected computers to interact with each other.



this project is about a chat server implemented in C++ , I used irssi as a client server to test it .

•••••• Usage •••••• :

run the makefile to compile the source code to an executable using this commande :

                                                            make
                                                            
then run the executable with two parameters:

                                                            ./ircserv <port> <password>

                                                            
• port: The port number on which your IRC server will be listening to for incoming IRC connections.


• password: The connection password. It will be needed by any IRC client that tries to connect to your server.

•••••• features •••••• :


• The server is be capable of handling multiple clients at the same time and never hang.

• compatibility with client-server irssi 

• Communication between client and server has is done via TCP/IP (v4 or v6).

◦ You are able to authenticate, set a nickname, a username, join a channel, send and receive private messages using your reference client.

◦ All the messages sent from one client to a channel are forwarded to every other client that joined the channel.

◦  channel operators for channel admins:

    ∗ KICK - Eject a client from the channel
    ∗ INVITE - Invite a client to a channel
    ∗ TOPIC - Change or view the channel
    ∗ MODE - Change the channel’s mode:
        · i: Set/remove Invite-only channel
        · t: Set/remove the restrictions of operators
    the TOPIC command to channel
        · k: Set/remove the channel key (password)
        · o: Give/take channel operator privilege
  
  • Handle file transfer. via DCC protocol . initialization of the connection by the chat-server then the trasfere is done from client-to-client
  
  • A bot. exist in every channels and displays informations about the channel (users / admin / topic)
  
