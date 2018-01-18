#if !defined PROTOCOL_VIOLATION_EXCEPTION
#define PROTOCOL_VIOLATION_EXCEPTION

#include <stdexcept>

class ProtocolViolationException : public std::logic_error {
public:
	ProtocolViolationException(char const* message): logic_error(message)
//, message(message)
{}
	//char const* what() const throw() { return message;}
private:
	//char const* message;
};

#endif // PROTOCOL_VIOLATION_EXCEPTION
