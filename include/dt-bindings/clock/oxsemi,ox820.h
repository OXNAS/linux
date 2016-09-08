/*
 * Copyright (C) 2016 Neil Armstrong <narmstrong@baylibre.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DT_CLOCK_OXSEMI_OX820_H
#define DT_CLOCK_OXSEMI_OX820_H

#define GATE_LEON	0
#define GATE_DMA_SGDMA	1
#define GATE_CIPHER	2
#define GATE_SD		3
#define GATE_SATA	4
#define GATE_AUDIO	5
#define GATE_USBMPH	6
#define GATE_ETHA	7
#define GATE_PCIEA	8
#define GATE_NAND	9
#define GATE_PCIEB	10
#define GATE_REF600	11
#define GATE_USBDEV	12

#define CLK_PLLA	13
#define CLK_PLLB	14

#endif /* DT_CLOCK_OXSEMI_OX820_H */
