#ifndef tp_www_beast_Server_h
#define tp_www_beast_Server_h

#include "tp_www_beast/Globals.h"

#include "tp_utils/AbstractCrossThreadCallback.h"

namespace tp_www
{
class Route;
}

namespace tp_www_beast
{
class Context;

//##################################################################################################
class Server
{
public:
  //################################################################################################
  Server(Context* context, tp_www::Route* root, uint16_t port);

  //################################################################################################
  ~Server();

private:
  struct Private;
  friend struct Private;
  Private* d;
};

}

#endif
