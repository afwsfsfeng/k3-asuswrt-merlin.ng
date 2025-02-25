/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */
#ifndef __k3_H__
#define __K3_H__

void envram_set(char *key, char *val);
void envram_commit(void);

extern void update_cfe_k3(void);
extern void k3_init(void);
extern void k3_init_done(void);
extern void start_k3screen(void);
#ifdef RTCONFIG_UUPLUGIN
void exec_uu_k3(void);
#endif

#endif	/* __k3_H__ */