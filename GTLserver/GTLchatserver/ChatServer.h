#include <memory>
#include <list>
class ChatServer final {
public:
    ChatServer();
    ~ChatServer() = default;

    ChatServer(const ChatServer& rhs) = delete;
    ChatServer& operator= (const ChatServer& rhs) = delete;

    bool Init(const char* ip, short port, EventLoop* loop);
    void Uninit();

private:
    std::shared_ptr<TcpServer> m_server;
}