/******************************************************************************
 * Copyright 2008-2013 by Aerospike.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy 
 * of this software and associated documentation files (the "Software"), to 
 * deal in the Software without restriction, including without limitation the 
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or 
 * sell copies of the Software, and to permit persons to whom the Software is 
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in 
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 *****************************************************************************/
#pragma once

#include <aerospike/as_map.h>
#include <aerospike/as_pair.h>

/******************************************************************************
 * TYPES
 ******************************************************************************/

typedef struct as_hashmap_source_s as_hashmap_source;
typedef struct as_hashmap_iterator_source_s as_hashmap_iterator_source;

/******************************************************************************
 * CONSTANTS
 ******************************************************************************/

extern const as_map_hooks      as_hashmap_map;
extern const as_iterator_hooks as_hashmap_iterator;

/******************************************************************************
 * FUNCTIONS
 ******************************************************************************/

as_map *    as_hashmap_init(as_map *, uint32_t);
as_map *    as_hashmap_new(uint32_t);

void             as_hashmap_destroy(as_map *); 

uint32_t		as_hashmap_hash(const as_map *m);
int             as_hashmap_set(as_map * m, const as_val * k, const as_val * v);
as_val *        as_hashmap_get(const as_map * m, const as_val * k);
uint32_t        as_hashmap_size(const as_map *);
int             as_hashmap_clear(as_map *);

as_iterator * as_hashmap_iterator_init(const as_map * m, as_iterator *i );
as_iterator * as_hashmap_iterator_new(const as_map * m);
bool as_hashmap_iterator_has_next(const as_iterator * i);
as_val * as_hashmap_iterator_next(as_iterator * i);
void as_hashmap_iterator_destroy(as_iterator * i);



