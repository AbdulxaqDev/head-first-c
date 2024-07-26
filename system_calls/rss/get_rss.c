#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"
#include "string.h"
#include "errno.h"


int main(int argc, char *argv[])
{

  char *feeds[] = {
    "http://rss.cnn.com/rss/money_topstories.rss",
    "http://rss.cnn.com/rss/money_news_companies.rss",
    "http://rss.cnn.com/rss/money_pf_taxes.rss",
  };

  int times = 3;
  char *phrase = argv[1];
  int i;

  for (i = 0; i < times; i++) {
    char var[255];
    sprintf(var, "RSS_FEED=%s", feeds[i]);
    char *vars[] = {var, NULL};
    if(execle("/usr/bin/python2", "/usr/bin/python2", "./rssgossip.py", phrase, NULL, vars) == -1){
      fprintf(stderr, "Can't run script: %s\n", strerror(errno));
      return 0;
    }
  }

  return 0;
}
