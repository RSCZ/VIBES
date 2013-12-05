#include <stdio.h>
#include <string>

namespace vibes
{
  //extern FILE *channel;  
  
  /**
  * Connects to the named pipe, not implemented yet.
  */
  void connect();
  void connect(const std::string &fileName);
  
  void disconnect();
  
  void figure();
  void figure(const std::string &figureName);
  
  void clear();
  void clear(const std::string &figureName);
  
  void drawBox(const double &x_lb, const double &x_ub, const double &y_lb, const double &y_ub, std::string figureName, char color);
  void drawBox(const double &x_lb, const double &x_ub, const double &y_lb, const double &y_ub, char color);
  void drawBox(const double &x_lb, const double &x_ub, const double &y_lb, const double &y_ub);
}
