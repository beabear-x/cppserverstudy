#pragma once

class EventLoop;
class Socket;
class Acceptor;
class Server
{
private:
    EventLoop *loop;    //事件循环
    Acceptor *acceptor;  //用于接受TCP连接
public:
    Server(EventLoop*);
    ~Server();

    void handleReadEvent(int);
    void newConnection(Socket *serv_sock);
};