/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 22:46:13 by aialonso          #+#    #+#             */
/*   Updated: 2026/10/19 14:00:00 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static void test(std::string const& name, Point const& a, Point const& b,
		Point const& c, Point const& p, bool expected) {
	bool const result = bsp(a, b, c, p);

	std::cout << name << ": " << (result ? "true" : "false");
	if (result == expected)
		std::cout << " [OK]" << std::endl;
	else
		std::cout << " [KO]" << std::endl;
}

// NOLINTBEGIN(readability-magic-numbers)
int main(void) {
	Point const a(0.0f, 0.0f);
	Point const b(10.0f, 0.0f);
	Point const c(0.0f, 10.0f);

	// Vertices en sentido antihorario (a, b, c)
	test("Dentro", a, b, c, Point(2.0f, 2.0f), true);
	test("Dentro decimal", a, b, c, Point(1.5f, 3.25f), true);
	test("Fuera", a, b, c, Point(8.0f, 8.0f), false);
	test("Fuera negativo", a, b, c, Point(-1.0f, 5.0f), false);
	test("Vertice a", a, b, c, a, false);
	test("Vertice b", a, b, c, b, false);
	test("Lado ab", a, b, c, Point(5.0f, 0.0f), false);
	test("Lado bc", a, b, c, Point(5.0f, 5.0f), false);
	test("Lado ca", a, b, c, Point(0.0f, 5.0f), false);

	// Mismos casos con los vertices en sentido horario (a, c, b)
	test("Horario dentro", a, c, b, Point(2.0f, 2.0f), true);
	test("Horario fuera", a, c, b, Point(8.0f, 8.0f), false);
	test("Horario vertice", a, c, b, c, false);
	test("Horario lado", a, c, b, Point(5.0f, 5.0f), false);

	// Triangulo no alineado con los ejes
	Point const d(-3.5f, 1.0f);
	Point const e(4.0f, -2.5f);
	Point const f(1.0f, 6.0f);
	test("Otro dentro", d, e, f, Point(0.5f, 1.5f), true);
	test("Otro fuera", d, e, f, Point(4.0f, 4.0f), false);
	return 0;
}
// NOLINTEND(readability-magic-numbers)
