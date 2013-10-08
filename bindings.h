#ifndef HAD_BINDINGS_H
#define HAD_BINDINGS_H

/*
  $NiH: bindings.h,v 1.7 2001/12/11 14:37:29 dillo Exp $

  bindings.h -- key bindings
  Copyright (C) 1996-2002 Dieter Baron

  This file is part of cftp, a fullscreen ftp client
  The author can be contacted at <dillo@giga.or.at>

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions
  are met:
  1. Redistributions of source code must retain the above copyright
     notice, this list of conditions and the following disclaimer.
  2. Redistributions in binary form must reproduce the above copyright
     notice, this list of conditions and the following disclaimer in
     the documentation and/or other materials provided with the
     distribution.
  3. The name of the author may not be used to endorse or promote
     products derived from this software without specific prior
     written permission.
 
  THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS
  OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
  GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER
  IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
  OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
  IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/



enum state {
    bs_nostate = -10, bs_unknown,
    bs_quit = -1, bs_none = 0,
    bs_remote, bs_local, bs_tag
};

struct binding {
    struct binding *next;
    enum state state;
    int fn;
    char **args;
};



extern enum state binding_state;
extern struct binding binding[];

extern char *binding_statename[];

extern struct binding binding_pool[];
extern char *binding_argpool[];
extern int binding_npool, binding_nargpool;



enum state parse_state(char *name);

#endif /* bindings.h */
